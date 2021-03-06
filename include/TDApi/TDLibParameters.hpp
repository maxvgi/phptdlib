#ifndef TD_API_TDLIBPARAMETERS_H
#define TD_API_TDLIBPARAMETERS_H

class TDLibParameters : public Php::Base // namespace: TDApi
{
    private:
        std::map<std::string, Php::Value> parameters;
        std::string getParameterValue(const char *parameter);

    public:
        TDLibParameters();
        virtual ~TDLibParameters() = default;

        // void __construct(array);

        Php::Value setParameter(Php::Parameters &params);
        std::string toJsonQuery();

        // inline void setLocked() { locked == true; }
        // can set parameters if locked == false
};

#endif // TD_API_TDLIBPARAMETERS_H
